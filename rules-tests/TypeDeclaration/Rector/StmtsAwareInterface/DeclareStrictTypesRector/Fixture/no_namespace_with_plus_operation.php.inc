<?php

final class NoNamespaceWithOperationPlusOperation
{
    private array $prop2;

    public function resolve2(array $second)
    {
        return $this->prop2 + $second;
    }
}

?>
-----
<?php

declare(strict_types=1);

final class NoNamespaceWithOperationPlusOperation
{
    private array $prop2;

    public function resolve2(array $second)
    {
        return $this->prop2 + $second;
    }
}
